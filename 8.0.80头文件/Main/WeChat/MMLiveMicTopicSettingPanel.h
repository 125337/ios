@interface MMLiveMicTopicSettingPanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMGrowTextViewDelegate>
{
    BOOL _allowEmptyMicTopic; // +0x8
    id <MMLiveMicTopicSettingPanelDelegate> _actionDelegate; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _originalTopic; // +0x20
    UIView * _textContainerView; // +0x28
    MMGrowTextView * _growTextView; // +0x30
    UILabel * _topicCountTips; // +0x38
}
- (id)initWithOriginalTopic:(id)arg1 scene:(unsigned long long)arg2 allowEmptyMicTopic:(BOOL)arg3;
- (void)configPageSheetAndDetailView;
- (void)layoutGrowTextView;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)allowEmptyMicTopic;
- (void)setAllowEmptyMicTopic:(BOOL)arg1;
- (id)originalTopic;
- (void)setOriginalTopic:(id)arg1;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)topicCountTips;
- (void)setTopicCountTips:(id)arg1;
- (void).cxx_destruct;
@end
