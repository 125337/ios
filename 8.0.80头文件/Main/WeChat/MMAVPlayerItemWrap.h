@interface MMAVPlayerItemWrap : NSObject
{
    NSObject<MMAVPlayerItem> * item; // +0x8
    NSString * path; // +0x10
    int status; // +0x18
    int targetStatus; // +0x1c
    BOOL isInScreen; // +0x20
    BOOL _shouldSkipStackOrResume; // +0x21
}
- (id)init;
- (void)dealloc;
- (id)item;
- (void)setItem:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)isInScreen;
- (void)setIsInScreen:(BOOL)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (int)targetStatus;
- (void)setTargetStatus:(int)arg1;
- (BOOL)shouldSkipStackOrResume;
- (void)setShouldSkipStackOrResume:(BOOL)arg1;
- (void).cxx_destruct;
@end
