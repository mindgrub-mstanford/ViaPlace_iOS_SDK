Pod::Spec.new do |s|
  s.name         = 'ViaPlace_iOS_SDK'
  s.version      = '0.0.1'
  s.summary      = 'ViaPlace iOS SDK'
  s.author = {
    'Matt Stanford' => 'mstanford@mindgrub.com'
  }
  s.source = {
    :git => '.',
    :commit => 'f4c5be6a773b7e180eed423f840b1f500f52e791',
  }
  s.source_files = 'Headers/*.h', 'Library/*.a'
end
