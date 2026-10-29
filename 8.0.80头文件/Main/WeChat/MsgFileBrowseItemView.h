@interface MsgFileBrowseItemView : MMUIView
{
    MMHeadImageView * _headImgView; // +0x8
    AttributeLabel * _nameLabel; // +0x10
    AttributeLabel * _statusLabel; // +0x18
    MMUILabel * _timeLabel; // +0x20
    MMUIView * _contentBkView; // +0x28
    MMWebImageView * _thumbView; // +0x30
    AttributeLabel * _titleLabel; // +0x38
    AttributeLabel * _detailLabel; // +0x40
    AttributeLabel * _secondDetailLabel; // +0x48
    UIView * _markSelectedView; // +0x50
    UIImageView * _markSelectedImageView; // +0x58
    UIView * _disabledMaskView; // +0x60
    MMUIActivityIndicatorView * _downloadingFlower; // +0x68
    UIImageView * _expiredIcon; // +0x70
    AppFileNodeProgressView * _circleProgress; // +0x78
    AttributeLabel * _expireLabel; // +0x80
    NSString * _name; // +0x88
    NSString * _title; // +0x90
    NSString * _detail; // +0x98
    NSString * _secondDetail; // +0xa0
    NSString * _detailIgnorePrefix; // +0xa8
    BOOL _isSelectable; // +0xb0
    BOOL _isSelected; // +0xb1
    BOOL _isLoading; // +0xb2
    BOOL _isDisabled; // +0xb3
    BOOL _isExpired; // +0xb4
    NSString * _itemID; // +0xb8
    double _circlePercent; // +0xc0
    id <MsgFileBrowseItemViewDelegate> _delegate; // +0xc8
    UILabel * _thumbDescLabel; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onClickSelect;
- (void)setIsSelectable:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)setIsDisabled:(BOOL)arg1;
- (void)setIsExpired:(BOOL)arg1;
- (void)setCirclePercent:(double)arg1;
- (void)updateWidthMsg:(id)arg1;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;
- (id)getThumbImageView;
- (void)sizeToFit;
- (id)thumbDescLabel;
- (id)itemID;
- (void)setItemID:(id)arg1;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (BOOL)isLoading;
- (BOOL)isDisabled;
- (BOOL)isExpired;
- (double)circlePercent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setThumbDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
