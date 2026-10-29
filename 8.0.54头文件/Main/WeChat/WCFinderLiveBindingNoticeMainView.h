@interface WCFinderLiveBindingNoticeMainView : UIView
{
    FinderLiveNoticeInfo * _noticeInfo; // +0x8
    MMUIView * _topLineView; // +0x10
    MMUIView * _bottomLineView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    MMUILabel * _timeLabel; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _reserveLabel; // +0x38
}
+ (id)getReserveString:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)topLineView;
- (id)bottomLineView;
- (id)arrowImageView;
- (id)timeLabel;
- (id)titleLabel;
- (id)reserveLabel;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void)setTopLineView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setReserveLabel:(id)arg1;
- (void).cxx_destruct;
@end

