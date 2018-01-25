#
# Be sure to run `pod lib lint ModuleTryPartOne.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ModuleTryPartOne'
  s.version          = '2'
  s.summary          = 'A short description of ModuleTryPartOne.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "Module Part A short description of ModuleTryPartOne."

  s.homepage         = "https://github.com/sweetKnight/ModuleTryCodes"
  s.license          = "MIT"
  s.author           = { 'sweetKnight' => '476105181@qq.com' }
  s.source           = { :git => 'https://github.com/sweetKnight/ModuleTryCodes.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'ModuleTryPartOne/Classes/**/*'
  
  # s.resource_bundles = {
  #   'ModuleTryPartOne' => ['ModuleTryPartOne/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency
end
