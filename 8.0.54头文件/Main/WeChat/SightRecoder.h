@interface SightRecoder : NSObject <MMovieCompressorDelegate>
{
    NSString * _srcVideoPath; // +0x8
    NSString * _dstVideoPath; // +0x10
    MMovieCompressor * _movieCompressor; // +0x18
    id /* block */ _completionHandler; // +0x20
}
- (id)initWithSourcePath:(id)arg1 DestPath:(id)arg2;
- (void)startRecodeWithCompletionHandler:(id /* block */)arg1;
- (void)mergeVideoFromPath:(id)arg1 andAudioFromPath:(id)arg2 toPath:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (id)srcVideoPath;
- (void)setSrcVideoPath:(id)arg1;
- (id)dstVideoPath;
- (void)setDstVideoPath:(id)arg1;
- (id)movieCompressor;
- (void)setMovieCompressor:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

