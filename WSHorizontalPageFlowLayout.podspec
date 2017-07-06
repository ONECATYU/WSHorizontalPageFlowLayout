
Pod::Spec.new do |s|

  s.name         = "WSHorizontalPageFlowLayout"
  s.version      = "0.0.1"
  s.summary      = "利用该layout可以快速封装左右分页滑动的集合视图.使用方式和系统UICollectionViewDelegateFlowLayout相同,方便快捷,可无缝切换."
  s.homepage     = "https://github.com/ONECATYU/WSHorizontalPageFlowLayout"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "ONECATYU" => "786910875@qq.com" }
  s.platform     = :ios
  s.source       = { :git => "https://github.com/ONECATYU/WSHorizontalPageFlowLayout.git", :tag => s.version.to_s }
  s.source_files  = "WSHorizontalPageFlowLayout", "WSHorizontalPageFlowLayout/**/*.{h,m}"
  s.frameworks = "UIKit", "Foundation"
  s.requires_arc = true

end
