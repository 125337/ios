@interface EditImageMusicLyricsWidgetTool : EditImageWidgetTool
{
    BOOL _dragToDelete; // +0x62
    UIImageView * _imageView; // +0x68
    WCStoryLyricWaveView * _waveView; // +0x70
    NSMutableArray * _lyrics; // +0x78
    UITextView * _snapShotTextView; // +0x80
    id /* block */ _didDeletedBlock; // +0x88
    id /* block */ _didDoubleTapBlock; // +0x90
    double _lyricTotalTime; // +0x98
    CGPoint _initialOrigin; // +0xa0
    struct _videoCropTimeRange; // +0xb0
}
+ (id)generateWidgetFromState:(id)arg1;
- (void)setDidDeletedBlock:(id /* block */)arg1;
- (void)setDidDoubleTapBlock:(id /* block */)arg1;
- (void)setInitialOrigin:(CGPoint)arg1;
- (void)setup;
- (void)updateMusicLyricsCropTime:(struct)arg1;
- (id)snapShotTextView;
- (void)updateMusicLyrics:(id)arg1 totalTime:(double)arg2;
- (id)splitLyrics:(id)arg1;
- (id)genLyricAnimationForScene:(unsigned long long)arg1;
- (id)genLyricImageWithLyric:(id)arg1;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (BOOL)startEditingText;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)onWidgitDeleted;
- (void)freezeWidget;
- (void)reviveWidget;
- (void)seekWidgetToTimeSec:(double)arg1;
- (void)resetWidget;
- (void)_freezeAtPlayingTime:(double)arg1;
- (id)exportWidgetStateForEditorFrame:(CGRect)arg1 assetPreviewFrame:(CGRect)arg2;
- (void)resetToInitialState;
- (id)exportAnimatedLayer;
- (CGPoint)initialOrigin;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)waveView;
- (void)setWaveView:(id)arg1;
- (id)lyrics;
- (void)setLyrics:(id)arg1;
- (void)setSnapShotTextView:(id)arg1;
- (BOOL)isDragToDelete;
- (void)setDragToDelete:(BOOL)arg1;
- (id /* block */)didDeletedBlock;
- (id /* block */)didDoubleTapBlock;
- (double)lyricTotalTime;
- (void)setLyricTotalTime:(double)arg1;
- (struct)videoCropTimeRange;
- (void)setVideoCropTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

