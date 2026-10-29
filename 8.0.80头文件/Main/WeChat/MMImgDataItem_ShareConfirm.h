@interface MMImgDataItem_ShareConfirm : MMImgDataItem
{
    CMessageWrap * _msgWrap; // +0x8
    NSString * _imagePath; // +0x10
}
- (id)initWithMsgWrap:(id)arg1;
- (unsigned int)type;
- (id)dataId;
- (id)thumbImage;
- (id)imagePath;
- (id)videoPath;
- (id)generateForwardMsg;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void).cxx_destruct;
@end
