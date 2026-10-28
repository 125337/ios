@interface WCTableViewCellBaseConfig : NSObject
{
    unsigned long long _selectionStyle; // +0x8
    long long _editStyle; // +0x10
    SEL _clickAction; // +0x18
    id _clickTarget; // +0x20
    NSString * _nsPathKey; // +0x28
    id _displayTarget; // +0x30
    SEL _willDisplayAction; // +0x38
}
- (void)addTarget:(id)arg1 clickAction:(SEL)arg2;
- (unsigned long long)selectionStyle;
- (void)setSelectionStyle:(unsigned long long)arg1;
- (long long)editStyle;
- (void)setEditStyle:(long long)arg1;
- (SEL)clickAction;
- (void)setClickAction:(SEL)arg1;
- (id)clickTarget;
- (void)setClickTarget:(id)arg1;
- (id)nsPathKey;
- (void)setNsPathKey:(id)arg1;
- (id)displayTarget;
- (void)setDisplayTarget:(id)arg1;
- (SEL)willDisplayAction;
- (void)setWillDisplayAction:(SEL)arg1;
- (void).cxx_destruct;
@end
