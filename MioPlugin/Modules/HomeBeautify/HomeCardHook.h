#import <Foundation/Foundation.h>

// HomeCard header 宿主 cell 的专属标记。
// header 不是列表行：ListCornerRadius 的 MMTableViewCell layoutSubviews hook 凭此 tag
// 跳过内缩/涂装。宿主必须恒按表宽构建——若被内缩成卡宽，容器经 autoresizing 收窄，
// 而内部按表宽建的主卡片/日历板/联系人分页（均无 autoresizing）会整体错位
// （探针实证：容器 393→375，卡片左距 25/右距 7 不对称）
static NSInteger const MioHomeCardHeaderCellTag = 0x4D48;   // 'MH'

@interface HomeCardHook : NSObject
+ (void)install;
@end
