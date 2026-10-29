@interface WCFinderPersonalCenterParams : NSObject
{
    BOOL _hasRedDotAtEnter; // +0x8
    BOOL _openPostActionDirectly; // +0x9
    int _refCommentScene; // +0xc
    unsigned long long _fromScene; // +0x10
    WCFinderDataItem * _fromDataItem; // +0x18
    NSString * _refObjectid; // +0x20
}
- (id)initWithOpenPostActionDirectly:(BOOL)arg1 fromScene:(unsigned long long)arg2;
- (id)initWithHasRedDotAtEnter:(BOOL)arg1 openPostActionDirectly:(BOOL)arg2 fromScene:(unsigned long long)arg3 refObjectid:(id)arg4 refCommentScene:(int)arg5 fromDataItem:(id)arg6;
- (BOOL)hasRedDotAtEnter;
- (void)setHasRedDotAtEnter:(BOOL)arg1;
- (BOOL)openPostActionDirectly;
- (void)setOpenPostActionDirectly:(BOOL)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

