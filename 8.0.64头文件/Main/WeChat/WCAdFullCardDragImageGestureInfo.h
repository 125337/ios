@interface WCAdFullCardDragImageGestureInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _basicRemWidth; // +0x8
    double _relatedWidth; // +0x10
    unsigned long long _dragStartTime; // +0x18
    unsigned long long _dragEndTime; // +0x20
    NSString * _imageUrl; // +0x28
    NSString * _srcDisplayRectStr; // +0x30
    NSString * _destDisplayRectStr; // +0x38
    NSString * _srcHitRectStr; // +0x40
    NSString * _destHitRectStr; // +0x48
    CGRect _srcDisplayRect; // +0x50
    CGRect _destDisplayRect; // +0x70
    CGRect _srcHitRect; // +0x90
    CGRect _destHitRect; // +0xb0
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)relatedWidth;
- (void)setRelatedWidth:(double)arg1;
- (CGRect)srcDisplayRect;
- (CGRect)destDisplayRect;
- (CGRect)srcHitRect;
- (CGRect)destHitRect;
- (CGRect)parseRectString:(id)arg1;
- (double)parseNumberStr:(id)arg1 basicWidth:(int)arg2 relatedWidth:(double)arg3;
- (BOOL)isValid;
- (unsigned long long)dragStartTime;
- (void)setDragStartTime:(unsigned long long)arg1;
- (unsigned long long)dragEndTime;
- (void)setDragEndTime:(unsigned long long)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (id)srcDisplayRectStr;
- (void)setSrcDisplayRectStr:(id)arg1;
- (id)destDisplayRectStr;
- (void)setDestDisplayRectStr:(id)arg1;
- (id)srcHitRectStr;
- (void)setSrcHitRectStr:(id)arg1;
- (id)destHitRectStr;
- (void)setDestHitRectStr:(id)arg1;
- (void).cxx_destruct;
@end
