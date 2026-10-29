@interface BraceletSportView : UIView <BraceletStepScoreDelegate, BraceletTopicRecordDelegate>
{
    BOOL _isSelf; // +0x8
    id <BraceletSportRecordDelegate> _delegate; // +0x10
    long long _scene; // +0x18
    DailySportRecord * _sportRecord; // +0x20
    unsigned long long _dateType; // +0x28
    DeviceRankDetailResonse * _rankDetail; // +0x30
    BraceletStepScoreView * _stepView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 rankDetail:(id)arg2 isSelf:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 dailySportRecord:(id)arg2 dateType:(unsigned long long)arg3 isSelf:(BOOL)arg4;
- (void)clickLikeAnimate:(BOOL)arg1;
- (void)clickUnlikeAnimate:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initSubview;
- (id)genTitleView;
- (void)onClickHistoryButton;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickSportRecord:(id)arg1;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sportRecord;
- (void)setSportRecord:(id)arg1;
- (unsigned long long)dateType;
- (void)setDateType:(unsigned long long)arg1;
- (id)rankDetail;
- (void)setRankDetail:(id)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)stepView;
- (void)setStepView:(id)arg1;
- (void).cxx_destruct;
@end
