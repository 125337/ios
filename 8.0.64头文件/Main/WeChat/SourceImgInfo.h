@interface SourceImgInfo : NSObject <PBCoding>
{
    unsigned int _bizType; // +0x8
    NSString * _imgSourceUrl; // +0x10
}
+ (void)PBArrayAdd_imgSourceUrl;
+ (void)PBArrayAdd_bizType;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)_finderSourceUrlQuery;
- (id)_finderSupportSourceUrl;
- (BOOL)isFinderPreviewMsg;
- (BOOL)finderShowSourceInImagePreview;
- (id)showImagePreviewSourceTips;
- (id)finderPreviewMsgTips;
- (id)finderPreviewIconName;
- (void)finderPreviewLonePressActionSheetTitle:(id *)arg1 icon:(id *)arg2;
- (void)finderJumpPreviewFromVC:(id)arg1 source:(long long)arg2 enterType:(unsigned long long)arg3;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)toXML;
- (id)description;
- (id)imagePreviewDisplayJumpSourceTitle;
- (BOOL)imagePreviewEnableClickTailLink;
- (BOOL)imageMessageSourceBubbleAlignRight;
- (id)imageMessageDisplaySourceTitle;
- (id)imageMessageDisplaySourceIcon:(CGSize)arg1 color:(id)arg2;
- (BOOL)imageMessageEnableClickSourceTitle;
- (id)imgSourceUrl;
- (void)setImgSourceUrl:(id)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
