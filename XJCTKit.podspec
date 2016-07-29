Pod::Spec.new do |s|

  s.name         = "XJCTKit"
  s.version      = "0.1.3"
  s.summary      = "XJCTKit测试"

  s.description  = <<-DESC

    涉及到法律圣诞节来分解落实到就浪费空间里谁看得见
                   DESC

  s.homepage     = "https://github.com/liaohengjie/XJCTKit"
  s.license      = "MIT"
  s.author             = { "廖幸杰" => "584566770@qq.com" }
  s.platform     = :ios, "5.0"
  s.source       = { :git => "https://github.com/liaohengjie/XJCTKit.git", :tag => "#{s.version}" }

  # s.frameworks = "SomeFramework", "AnotherFramework"
  # s.libraries = "iconv", "xml2"
  s.requires_arc = true

  s.dependency "AMapNavi"
  s.dependency "AMapSearch"
  s.dependency "JPush"
  s.dependency "AFNetworking"
  s.dependency "MJExtension"
  s.dependency "MMAliPaySDK"
  s.dependency "BlocksKit"
  s.dependency "SDWebImage"
  s.dependency "IQKeyboardManager"
  s.dependency "Masonry"
  s.dependency "UMengAnalytics-NO-IDFA"
  s.dependency "FDFullscreenPopGesture"
  s.dependency "UITableView+FDTemplateLayoutCell"
  s.dependency "MOBFoundation"
  s.dependency "ShareSDK3"
  s.dependency "ShareSDK3/ShareSDKPlatforms/QQ"
  s.dependency "ShareSDK3/ShareSDKPlatforms/WeChat"

  s.vendored_frameworks = 'XJ/CTKit.framework'
  s.resources  = "XJ/CTKit.bundle"

end
