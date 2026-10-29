@interface WSTabRedDotInfoCollector : NSObject
{
    WSAllTabRedDotInfo * _allTabRedDotInfo; // +0x8
    NSNumber * _currentBubbleCategory; // +0x10
}
- (id)init;
- (void)clear;
- (id)returnAllTabRedDotInfoReportString;
- (unsigned int)returnHaveRedDotBubble:(id)arg1;
- (void)configureTabNumberReddot:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 category:(long long)arg4 extraLog:(id)arg5;
- (void)configureTabContentReddot:(id)arg1 showInfo:(id)arg2 category:(long long)arg3 extraLog:(id)arg4;
- (id)getBriefInfo;
- (void)reportTabTipsBubbleExpose:(long long)arg1;
- (void)reportTabTipsBubbleClick:(long long)arg1;
- (id)allTabRedDotInfo;
- (void)setAllTabRedDotInfo:(id)arg1;
- (id)currentBubbleCategory;
- (void)setCurrentBubbleCategory:(id)arg1;
- (void).cxx_destruct;
@end
