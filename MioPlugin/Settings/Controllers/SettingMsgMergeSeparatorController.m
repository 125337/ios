//
//  SettingMsgMergeSeparatorController.m
//  MioPlugin
//
//  配置合并模式二级页（对齐 BubbleBoxSeparatorViewController）：
//  写侧 = 分段开关直写 Config 四个 separator 键（isOn → setXxxSeparator: 同语义）；
//  读侧 = MsgMergeEngine isSeparatorMessage: 按消息类型查表决定是否打断合并链。
//  语义：YES（打断，默认）→ 该类消息独立成组；NO（参与合并）→ 该类消息并入相邻同发送者的合并链。
//  系统/时间两个开关属原版节点结构层消费（当前实现中系统消息与时间行始终断组，开关预留）。
//

#import "SettingMsgMergeSeparatorController.h"
#import "../../Modules/MsgMerge/MsgMergeConfig.h"
#import "../../Core/LogManager.h"

@implementation SettingMsgMergeSeparatorController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"配置合并模式";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    MsgMergeConfig *config = [MsgMergeConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：打断规则 ────
    y = [self addSectionHeader:@"按消息类型设置打断规则" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addSegmentRowInGroup:g1
                              title:@"媒体消息"
                                key:@"mmSepMedia"
                              names:@[@"参与合并", @"打断合并"]
                              index:config.mmSepMedia ? 1 : 0
                                 cy:cy
                              width:w];
    cy = [self addSegmentRowInGroup:g1
                              title:@"表情消息"
                                key:@"mmSepEmoticon"
                              names:@[@"参与合并", @"打断合并"]
                              index:config.mmSepEmoticon ? 1 : 0
                                 cy:cy
                              width:w];
    cy = [self addSegmentRowInGroup:g1
                              title:@"系统消息"
                                key:@"mmSepSystem"
                              names:@[@"参与合并", @"打断合并"]
                              index:config.mmSepSystem ? 1 : 0
                                 cy:cy
                              width:w];
    cy = [self addSegmentRowInGroup:g1
                              title:@"时间消息"
                                key:@"mmSepTime"
                              names:@[@"参与合并", @"打断合并"]
                              index:config.mmSepTime ? 1 : 0
                                 cy:cy
                              width:w];
    y = [self finishGroup:g1 atY:y height:cy];

    y = [self addSectionFooter:@"「打断合并」= 该类消息独立成组；「参与合并」= 该类消息并入相邻同发送者的合并链。系统消息与时间行由微信渲染结构决定，当前始终打断合并" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"MsgMerge", @"[UI] SettingMsgMergeSeparatorController wpBuildRows done");
}

@end
