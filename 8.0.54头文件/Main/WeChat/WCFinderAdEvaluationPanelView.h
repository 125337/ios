@interface WCFinderAdEvaluationPanelView : UIView
{
    UILabel * _evaluationTipsLabel; // +0x8
    UILabel * _titleTipsLabel; // +0x10
    UIButton * _goodButton; // +0x18
    UIButton * _dislikeButton; // +0x20
    UIView * _separateAboveComplaintsLine; // +0x28
    UILabel * _complaintsTipsLabel; // +0x30
}
- (id)titleTipsLabel;
- (id)goodButton;
- (id)dislikeButton;
- (id)evaluationTipsLabel;
- (void)setEvaluationTipsLabel:(id)arg1;
- (void)setTitleTipsLabel:(id)arg1;
- (void)setGoodButton:(id)arg1;
- (void)setDislikeButton:(id)arg1;
- (id)separateAboveComplaintsLine;
- (void)setSeparateAboveComplaintsLine:(id)arg1;
- (id)complaintsTipsLabel;
- (void)setComplaintsTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

