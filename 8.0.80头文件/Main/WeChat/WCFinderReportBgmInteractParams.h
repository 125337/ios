@interface WCFinderReportBgmInteractParams : NSObject
{
    unsigned int _flags; // +0x8
    unsigned int _type; // +0xc
    unsigned int _itemType; // +0x10
    unsigned long long _listenID; // +0x18
    unsigned long long _feedID; // +0x20
    unsigned long long _mtime; // +0x28
}
- (unsigned long long)listenID;
- (void)setListenID:(unsigned long long)arg1;
- (unsigned long long)feedID;
- (void)setFeedID:(unsigned long long)arg1;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (unsigned long long)mtime;
- (void)setMtime:(unsigned long long)arg1;
@end
