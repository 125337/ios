@interface MMFinderGetLiveGloryListSuccessModel : NSObject
{
    unsigned int _liveContactsMaxDisplayCount; // +0x8
    NSMutableArray * _liveContacts; // +0x10
}
- (id)liveContacts;
- (void)setLiveContacts:(id)arg1;
- (unsigned int)liveContactsMaxDisplayCount;
- (void)setLiveContactsMaxDisplayCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

