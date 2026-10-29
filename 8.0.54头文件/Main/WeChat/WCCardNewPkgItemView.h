@interface WCCardNewPkgItemView : MMUIView
{
    long long _state; // +0x8
    MMWebImageView * _headImageView; // +0x10
    MMUILabel * _subTitleLabel; // +0x18
    MMUIImageView * _readPockImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _numberLabel; // +0x30
    MMUILabel * _timeLabel; // +0x38
    MMUILabel * _stateLabel; // +0x40
    CALayer * _shadowLayer; // +0x48
    NSArray * _sameTpCardDataList; // +0x50
    double _stateX; // +0x58
    double _rightBaseLineX; // +0x60
}
+ (double)cellHeight;
- (id)initWithSameTpCardDataList:(id)arg1;
- (void)setState:(long long)arg1;
- (void)initData;
- (void)layoutSubviews;
- (void)configDataToUI;
- (id)stringWithTime:(double)arg1;
- (id)headImageView;
- (id)readPockImageView;
- (id)subTitleLabel;
- (id)titleLabel;
- (id)timeLabel;
- (id)numberLabel;
- (id)stateLabel;
- (id)shadowLayer;
- (long long)state;
- (void)setHeadImageView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setReadPockImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setNumberLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setShadowLayer:(id)arg1;
- (id)sameTpCardDataList;
- (void)setSameTpCardDataList:(id)arg1;
- (double)stateX;
- (void)setStateX:(double)arg1;
- (double)rightBaseLineX;
- (void)setRightBaseLineX:(double)arg1;
- (void).cxx_destruct;
@end

