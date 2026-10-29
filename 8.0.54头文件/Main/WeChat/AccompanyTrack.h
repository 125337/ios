@interface AccompanyTrack : NSObject
{
    AccompanyTrack _accompanyTrack; // +0x8
}
- (BOOL)initWithTrackInfos:(id)arg1;
- (BOOL)processWithTrackIndex:(unsigned long long)arg1 TrackInfo:(id)arg2 Buffer:(short *)arg3 BufLen:(unsigned long long)arg4 Gain:(float)arg5;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

