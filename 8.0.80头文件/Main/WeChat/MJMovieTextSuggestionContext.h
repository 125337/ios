@interface MJMovieTextSuggestionContext : NSObject
{
    id <MJMovieTextSuggestionContextDataSource> _dataSource; // +0x8
    NSString * _sessionID; // +0x10
    NSString * _finderUserName; // +0x18
    NSString * _userInputWording; // +0x20
    NSData * _feedEmbedding; // +0x28
    MJMovieTextSuggestionSnapshot * _snapshot; // +0x30
}
+ (id)snapshotOCRDataWithText:(id)arg1;
- (id)initWithSessionID:(id)arg1 finderUserName:(id)arg2;
- (BOOL)isSnapshotReady;
- (id)toCGIContext;
- (id)musicID;
- (id)templateID;
- (id)userLocation;
- (id)feedLocations;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)userInputWording;
- (void)setUserInputWording:(id)arg1;
- (id)feedEmbedding;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
