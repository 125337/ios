@interface FlutterActionBarTitleConfig : NSObject
{
    NSString * _text; // +0x8
    NSNumber * _color; // +0x10
    NSString * _subTitile; // +0x18
    NSNumber * _subTitleColor; // +0x20
}
+ (id)makeWithText:(id)arg1 color:(id)arg2 subTitile:(id)arg3 subTitleColor:(id)arg4;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)text;
- (void)setText:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)subTitile;
- (void)setSubTitile:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (void).cxx_destruct;
@end

