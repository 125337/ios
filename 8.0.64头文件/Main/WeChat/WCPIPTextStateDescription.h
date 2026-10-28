@interface WCPIPTextStateDescription : NSObject
{
    BOOL _disbleDisplayIcon; // +0x8
    NSString * _text; // +0x10
    NSString * _iconName; // +0x18
    UIFont * _customTextFont; // +0x20
    CGSize _containerSize; // +0x28
    CGRect _normalizedFrame; // +0x38
}
+ (id)createLiveStateDescription:(id)arg1;
- (id)initWithText:(id)arg1 icon:(id)arg2;
- (id)initWithText:(id)arg1 icon:(id)arg2 normalizedFrame:(CGRect)arg3 containerSize:(CGSize)arg4;
- (BOOL)isEqual:(id)arg1;
- (CGSize)containerSize;
- (void)setContainerSize:(CGSize)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (BOOL)disbleDisplayIcon;
- (void)setDisbleDisplayIcon:(BOOL)arg1;
- (id)customTextFont;
- (void)setCustomTextFont:(id)arg1;
- (void).cxx_destruct;
@end
