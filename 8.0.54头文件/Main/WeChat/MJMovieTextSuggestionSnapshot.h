@interface MJMovieTextSuggestionSnapshot : NSObject
{
    BOOL _isPrefetched; // +0x8
    NSString * _sessionID; // +0x10
    NSData * _jpegData; // +0x18
    NSString * _ocrText; // +0x20
    NSString * _cdnUrl; // +0x28
    struct _snapshotTime; // +0x30
}
- (id)initWithSessionID:(id)arg1 snapshotTime:(struct)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)sessionID;
- (struct)snapshotTime;
- (id)jpegData;
- (void)setJpegData:(id)arg1;
- (id)ocrText;
- (void)setOcrText:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (BOOL)isPrefetched;
- (void)setIsPrefetched:(BOOL)arg1;
- (void).cxx_destruct;
@end

