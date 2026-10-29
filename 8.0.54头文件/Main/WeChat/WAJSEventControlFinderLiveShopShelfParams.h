@interface WAJSEventControlFinderLiveShopShelfParams : NSObject
{
    BOOL _open; // +0x8
    BOOL _animated; // +0x9
    unsigned long long _liveID; // +0x10
}
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (BOOL)open;
- (void)setOpen:(BOOL)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
@end

