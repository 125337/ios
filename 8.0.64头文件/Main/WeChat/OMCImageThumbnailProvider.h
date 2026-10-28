@interface OMCImageThumbnailProvider : NSObject <OMCThumbnailProvider>
{
    XPath _imageFilePath; // +0x8
    OMJID * _segmentID; // +0x10
    unsigned long long _state; // +0x18
    NSMutableDictionary * _resultHandlersByTaskID; // +0x20
    UIImage * _thumbnailImage; // +0x28
    CGSize _maxPixelSize; // +0x30
}
- (id)initWithClipSegment:(id)arg1 maxPixelSize:(CGSize)arg2;
- (void)dealloc;
- (long long)requestThumbnailAtTime:(struct)arg1 resultHandler:(id /* block */)arg2;
- (long long)requestThumbnailAtTimeRange:(struct)arg1 resultHandler:(id /* block */)arg2;
- (void)notifyDidCompleteDecodingImage:(SharedPtr<XIKImage>)arg1 timeRange:(struct)arg2;
- (void)cancelTask:(long long)arg1;
- (void)cancelAllTasks;
- (void)reopen;
- (id)segmentID;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)resultHandlersByTaskID;
- (void)setResultHandlersByTaskID:(id)arg1;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)arg1;
- (CGSize)maxPixelSize;
- (void)setMaxPixelSize:(CGSize)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
