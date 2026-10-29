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
    UIView * _markSelectedView; // +0x48
    UIImageView * _markSelectedImageView; // +0x50
    UIView * _disabledMaskView; // +0x58
    MMUIActivityIndicatorView * _downloadingFlower; // +0x60
    UIImageView * _expiredIcon; // +0x68
    AppFileNodeProgressView * _circleProgress; // +0x70
    AttributeLabel * _expireLabel; // +0x78
    NSString * _name; // +0x80
    NSString * _title; // +0x88
    NSString * _detail; // +0x90
    NSString * _detailIgnorePrefix; // +0x98
    BOOL _isSelectable; // +0xa0
    BOOL _isSelected; // +0xa1
    BOOL _isLoading; // +0xa2
    BOOL _isDisabled; // +0xa3
    BOOL _isExpired; // +0xa4
    NSString * _itemID; // +0xa8
    double _circlePercent; // +0xb0
    id <MsgFileBrowseItemViewDelegate> _delegate; // +0xb8
    UILabel * _thumbDescLabel; // +0xc0
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

