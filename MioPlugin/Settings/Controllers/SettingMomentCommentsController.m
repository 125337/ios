#import "SettingMomentCommentsController.h"
#import "../../Modules/Moments/MomentsConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"

static const NSInteger kMaxComments = 20;

@implementation SettingMomentCommentsController

- (NSString *)listKey {
    return self.textsKey ?: @"fakeCommentTexts";
}

- (NSArray<NSString *> *)currentTexts {
    id v = [[MomentsConfig shared] valueForKey:[self listKey]];
    return [v isKindOfClass:[NSArray class]] ? v : @[];
}

- (void)saveTexts:(NSArray<NSString *> *)texts {
    [[MomentsConfig shared] setValue:texts forKey:[self listKey]];
    [ConfigManager saveAll];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = self.pageTitle ?: @"评论文本";
    // 不在此处 buildUI：viewWillAppear 统一重建，避免同表叠行
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 微信引擎表每次重建后再添加行，防止 pop 返回/多次进入时行叠加
    [self wpRebuildWeChatTable];
    [self buildUI];
}

#pragma mark - 行点击分发

- (void)buttonClicked:(NSString *)key {
    if ([key hasPrefix:@"comment_"]) {
        [self showCommentActions:[key substringFromIndex:8].integerValue];
        return;
    }
    if ([key isEqualToString:@"addComment"]) {
        [self promptAddComment];
        return;
    }
    if ([key isEqualToString:@"clearComments"]) {
        [self clearAllComments];
        return;
    }
    [super buttonClicked:key];
}

#pragma mark - 评论操作

- (void)reloadTable {
    [self wpRebuildWeChatTable];
    [self buildUI];
}

- (void)showCommentActions:(NSInteger)index {
    NSArray *texts = [self currentTexts];
    if (index < 0 || index >= (NSInteger)texts.count) return;
    NSString *text = texts[index];
    [MioAlertHelper showMenuAlert:(text.length ? text : @"评论")
                          buttons:@[@"编辑", @"删除该评论"]
                        onButton:^(NSInteger btn) {
        if (btn == 0) [self promptEditComment:index];
        else if (btn == 1) [self deleteComment:index];
    }];
}

- (void)promptAddComment {
    if ((NSInteger)[self currentTexts].count >= kMaxComments) {
        [MioAlertHelper showTipAlert:[NSString stringWithFormat:@"最多设置 %ld 条评论", (long)kMaxComments]];
        return;
    }
    [MioAlertHelper showInputAlert:@"新增评论"
                           message:@"使用时随机取用"
                       initialText:nil
                       placeholder:@"输入评论内容"
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *input) {
        NSString *text = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (!text.length) return;
        NSMutableArray *arr = [[self currentTexts] mutableCopy] ?: [NSMutableArray array];
        [arr addObject:text];
        [self saveTexts:arr];
        [self reloadTable];
    }];
}

- (void)promptEditComment:(NSInteger)index {
    NSArray *texts = [self currentTexts];
    if (index < 0 || index >= (NSInteger)texts.count) return;
    [MioAlertHelper showInputAlert:@"编辑评论"
                           message:@"使用时随机取用"
                       initialText:texts[index]
                       placeholder:@"输入评论内容"
                          keyboard:UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *input) {
        NSString *text = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (!text.length) return;
        NSMutableArray *arr = [texts mutableCopy];
        arr[index] = text;
        [self saveTexts:arr];
        [self reloadTable];
    }];
}

- (void)deleteComment:(NSInteger)index {
    NSMutableArray *arr = [[self currentTexts] mutableCopy];
    if (index < 0 || index >= (NSInteger)arr.count) return;
    [arr removeObjectAtIndex:index];
    [self saveTexts:arr];
    [self reloadTable];
}

- (void)clearAllComments {
    [MioAlertHelper showConfirmAlert:@"确定清空所有评论文本？"
                        confirmTitle:@"清空"
                           onConfirm:^{
        [self saveTexts:@[]];
        [self reloadTable];
    }];
}

#pragma mark - UI

- (void)buildUI {
    self.masterSwitchKeys = [NSMutableSet set];

    NSArray *texts = [self currentTexts];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"评论列表" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    if (texts.count == 0) {
        // 空态：占位行兼新增入口
        cy = [self addButtonRowInGroup:group title:@"暂无评论，点击新增" hint:@"" key:@"addComment" cy:cy width:w];
    } else {
        for (NSUInteger i = 0; i < texts.count; i++) {
            if (i > 0) cy = [self addSeparatorInGroup:group cy:cy width:w];
            NSString *key = [NSString stringWithFormat:@"comment_%lu", (unsigned long)i];
            cy = [self addButtonRowInGroup:group title:texts[i] hint:@"管理" key:key cy:cy width:w];
        }
    }
    y = [self finishGroup:group atY:y height:cy];

    y = [self addSectionHeader:@"操作" y:y width:w];
    UIView *group2 = [self addTableGroupAtY:y width:w];
    CGFloat cy2 = 0;
    cy2 = [self addButtonRowInGroup:group2 title:@"＋ 新增评论"
                               hint:texts.count >= kMaxComments ? @"已达上限(20)" : @""
                                key:@"addComment" cy:cy2 width:w];
    if (texts.count > 0) {
        cy2 = [self addSeparatorInGroup:group2 cy:cy2 width:w];
        cy2 = [self addButtonRowInGroup:group2 title:@"清空所有评论" hint:@"" key:@"clearComments" cy:cy2 width:w];
    }
    y = [self finishGroup:group2 atY:y height:cy2];

    [self addSectionFooter:(self.footerText ?: @"伪集赞时按设置的评论数量从列表随机取用") y:y width:w];
}

@end
