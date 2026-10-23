// 黄白官方搜索链路探针（临时）：定位 hb_searchOfficialMusic:completion: 的实现类与 IMP，
// hook 后 dump 入参，并列出宿主 MusicLiveSearch 相关类的方法清单。实证完成后随链路接入一起删除。
#import <Foundation/Foundation.h>

@interface MusicShareOfficialProbe : NSObject
+ (void)install;
@end
