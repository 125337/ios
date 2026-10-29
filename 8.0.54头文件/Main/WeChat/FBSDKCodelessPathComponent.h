@interface FBSDKCodelessPathComponent : NSObject
{
    int _index; // +0x8
    int _tag; // +0xc
    int _section; // +0x10
    int _row; // +0x14
    int _matchBitmask; // +0x18
    NSString * _className; // +0x20
    NSString * _text; // +0x28
    NSString * _hint; // +0x30
    NSString * _desc; // +0x38
}
- (id)initWithJSON:(id)arg1;
- (id)className;
- (id)text;
- (id)hint;
- (id)desc;
- (int)index;
- (int)tag;
- (int)section;
- (int)row;
- (int)matchBitmask;
- (void).cxx_destruct;
@end

