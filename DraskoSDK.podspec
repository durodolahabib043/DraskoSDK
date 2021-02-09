#
# Be sure to run `pod lib lint DraskoSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DraskoSDK'
  s.version          = '0.1.0'
  s.summary          = ' DraskoSDK this is a test app to see how this works '

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hdurodola/DraskoSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'hdurodola' => 'durodolahabib043@gmail.com' }
  s.source           = { :git => 'https://github.com/durodolahabib043/DraskoSDK', :tag => 's.version.to_s' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  #0.1.1 s.version.to_s

  s.source_files = 'DraskoSDK/Classes/**/*.{h,m,swift}'
  
  # s.resource_bundles = {
  #   'DraskoSDK' => ['DraskoSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
 #  s.ios.dependency 'caDigitalId'
 #  s.ios.dependency 'TA_7a2a65da018757c5ac25719332f7312e'

    s.ios.dependency 'KSCrash', '~> 1.15.21'
end
