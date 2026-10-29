@interface TPDLProxyAdapterManager : NSObject
{
    id <TPDLProxyAdapterDelegate> mAdapter; // +0x8
}
+ (id)getInstance;
- (id)init;
- (void)setAdapter:(id)arg1;
- (id)getOfflineRecordVinfo:(id)arg1 withFormat:(id)arg2;
- (long long)getOfflineRecordDurationWithVid:(id)arg1 format:(id)arg2;
- (void).cxx_destruct;
@end
