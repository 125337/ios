@interface WCCanvasComponentHalfRandomCardInfo : MMObject <NSCoding>
{
    WCCanvasComponentHalfRandomCardPreAnimInfo * _preAnimInfo; // +0x8
    WCCanvasComponentHalfRandomCardRotateAnimInfo * _rotateAnimInfo; // +0x10
    NSArray * _items; // +0x18
    NSString * _backgroundImg; // +0x20
    double _backgroundImgWidth; // +0x28
    double _backgroundImgHeight; // +0x30
    NSString * _bulletCommentsTitle; // +0x38
    NSArray * _positiveBulletComments; // +0x40
    NSArray * _negativeBulletComments; // +0x48
    NSString * _theChosenRandomCardId; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)preAnimInfo;
- (void)setPreAnimInfo:(id)arg1;
- (id)rotateAnimInfo;
- (void)setRotateAnimInfo:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)backgroundImg;
- (void)setBackgroundImg:(id)arg1;
- (double)backgroundImgWidth;
- (void)setBackgroundImgWidth:(double)arg1;
- (double)backgroundImgHeight;
- (void)setBackgroundImgHeight:(double)arg1;
- (id)bulletCommentsTitle;
- (void)setBulletCommentsTitle:(id)arg1;
- (id)positiveBulletComments;
- (void)setPositiveBulletComments:(id)arg1;
- (id)negativeBulletComments;
- (void)setNegativeBulletComments:(id)arg1;
- (id)theChosenRandomCardId;
- (void)setTheChosenRandomCardId:(id)arg1;
- (void).cxx_destruct;
@end
