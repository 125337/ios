@interface BTAudioItemCellViewModel : BTReaderItemCellViewModel <IAudioReceiverExt, IMusicPlayerExt>
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)itemViewClassName;
- (double)viewHeight;
- (CGSize)containViewSize;
- (unsigned long long)digestLineNumber;
- (BOOL)exposeDigest;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (CGSize)titleSize;
- (id)timeStr;
- (id)coverImgURL;
- (id)tingItem;
@end

