@interface WCResourceCollectionViewCell : UICollectionViewCell
{
    NSString * _sectionTtile; // +0x8
    SimpleChatLogInfo * _msgInfo; // +0x10
    ResourceMsgImageSquareThumbView * _thumbView; // +0x18
    id <WCResourceCollectionViewCellDelegate> _delegate; // +0x20
}
+ (id)identifier;
- (BOOL)isSelected;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithMsgInfo:(id)arg1 withSize:(CGSize)arg2;
- (void)onClickMsgSquareThumb:(id)arg1;
- (id)sectionTtile;
- (void)setSectionTtile:(id)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

