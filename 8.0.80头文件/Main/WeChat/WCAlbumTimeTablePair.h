@interface WCAlbumTimeTablePair : NSObject
{
    NSString * _showingStr; // +0x8
    NSString * _timeStr; // +0x10
}
+ (id)pairWithShowingStr:(id)arg1 timeStr:(id)arg2;
+ (id)pairByUInt:(unsigned int)arg1;
- (id)initWithShowingStr:(id)arg1 timeStr:(id)arg2;
- (id)showingStr;
- (id)timeStr;
- (void).cxx_destruct;
@end
