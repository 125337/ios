@interface AffEmoticonDesignerListDataRecieverImpl : NSObject <EmoticonDesignerListDataRecieverBase>
- (void)onGotTotalEmoticonCount:(id)arg1 emoticonCount:(int)arg2 emojiCount:(int)arg3;
- (void)onFirstFetchFinished:(id)arg1;
- (void)onFirstFetchFailed:(id)arg1;
- (void)onFetchEmoticonFinishedFor:(id)arg1 dataType:(int)arg2 hasMore:(BOOL)arg3;
- (void)onFetchEmoticonDataFailedFor:(id)arg1 dataType:(int)arg2;
@end

