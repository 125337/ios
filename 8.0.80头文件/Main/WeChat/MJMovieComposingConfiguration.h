@interface MJMovieComposingConfiguration : NSObject
{
    BOOL _shouldShowTitleGuide; // +0x8
    BOOL _shouldShowAssetAddingEntry; // +0x9
    BOOL _isRecognitionGuideEnabled; // +0xa
    BOOL _isDraftEnabled; // +0xb
    BOOL _isAsyncExportEnabled; // +0xc
    BOOL _isAudioSessionOccupiedOutside; // +0xd
    long long _entryScene; // +0x10
}
- (id)initWithShouldShowTitleGuide:(BOOL)arg1 shouldShowAssetAddingEntry:(BOOL)arg2 isRecognitionGuideEnabled:(BOOL)arg3 isDraftEnabled:(BOOL)arg4 isAsyncExportEnabled:(BOOL)arg5 isAudioSessionOccupiedOutside:(BOOL)arg6 entryScene:(long long)arg7;
- (id)description;
- (BOOL)shouldShowTitleGuide;
- (BOOL)shouldShowAssetAddingEntry;
- (BOOL)isRecognitionGuideEnabled;
- (BOOL)isDraftEnabled;
- (BOOL)isAsyncExportEnabled;
- (BOOL)isAudioSessionOccupiedOutside;
- (long long)entryScene;
@end
