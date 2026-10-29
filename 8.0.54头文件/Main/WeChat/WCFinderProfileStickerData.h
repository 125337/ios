@interface WCFinderProfileStickerData : NSObject
{
    unsigned int _designerUin; // +0x8
    EmoticonFinderDesignerContentLogic * _contentLogic; // +0x10
}
- (id)contentLogic;
- (void)setContentLogic:(id)arg1;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (void).cxx_destruct;
@end

