@interface MsgImgPickerSelectedCollectionViewCell : UICollectionViewCell
{
    BOOL _isShowBorder; // +0x8
    UIImageView * _imageView; // +0x10
    SimpleMsgInfo * _msgInfo; // +0x18
}
- (void)setIsShowBorder:(BOOL)arg1;
- (id)imageView;
- (BOOL)isShowBorder;
- (void)setImageView:(id)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (void).cxx_destruct;
@end
