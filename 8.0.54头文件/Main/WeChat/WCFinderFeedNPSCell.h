@interface WCFinderFeedNPSCell : WCFinderTableViewCell <WCFinderFocusCellProtocol>
{
    id <WCFinderFeedNPSCellDelegate> _delegate; // +0x8
    id <WCFinderNpsSurveyContextInfoDelegate> _npsDelegate; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    NPSFlutterVC * _curNPSFlutterVC; // +0x20
    FinderNpsSurveyQuestion * _curSurveyQuestion; // +0x28
    long long _curTriggerEvent; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithContentVM:(id)arg1;
- (void)willBeginDisplay;
- (void)didEndDisplay;
- (void)showNPSFlutterQuestion:(id)arg1;
- (void)clickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)doCompleteAction;
- (void)reportNPSWithReportType:(unsigned int)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)onClickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)onCloseNPS;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)npsDelegate;
- (void)setNpsDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)curNPSFlutterVC;
- (void)setCurNPSFlutterVC:(id)arg1;
- (id)curSurveyQuestion;
- (void)setCurSurveyQuestion:(id)arg1;
- (long long)curTriggerEvent;
- (void)setCurTriggerEvent:(long long)arg1;
- (void).cxx_destruct;
@end

