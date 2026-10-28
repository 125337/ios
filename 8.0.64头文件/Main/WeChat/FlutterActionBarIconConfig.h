@interface FlutterActionBarIconConfig : NSObject
{
    NSNumber * _iconId; // +0x8
    NSNumber * _type; // +0x10
    NSNumber * _iconColor; // +0x18
    NSString * _text; // +0x20
}
+ (id)makeWithIconId:(id)arg1 type:(id)arg2 iconColor:(id)arg3 text:(id)arg4;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end
