# Don't call this file explicitly, it is called implicitly by the build rules.

Import('env')
Export('env')

env.SConscript('ld_scripts/SConscript')

env.Append(
	LIB_SOURCES = [
		env.SConscript('interrupt/SConscript'),
		env.SConscript('rcc/SConscript'),
		env.SConscript('usb/SConscript'),
		Glob('startup/*.cpp'),
		Glob('i2c/*.cpp'),
		Glob('os/*.cpp'),
	],
)
