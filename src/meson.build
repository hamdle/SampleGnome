samplegnome_sources = [
  'main.c',
  'samplegnome-window.c',
]

samplegnome_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
]

gnome = import('gnome')

samplegnome_sources += gnome.compile_resources('samplegnome-resources',
  'samplegnome.gresource.xml',
  c_name: 'samplegnome'
)

executable('samplegnome', samplegnome_sources,
  dependencies: samplegnome_deps,
  install: true,
)
