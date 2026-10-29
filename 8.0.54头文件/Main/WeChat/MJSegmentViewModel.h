@interface MJSegmentViewModel : NSObject
{
    BOOL _isAnchored; // +0x8
    BOOL _hasAudioClip; // +0x9
    OMCSegment * _segment; // +0x10
    OMJID * _segmentID; // +0x18
    unsigned long long _segmentType; // +0x20
    NSString * _segmentTitle; // +0x28
    UBEmptySignal * _segmentDidMutateSignal; // +0x30
    unsigned long long _segmentUIState; // +0x38
    MJSegmentPropertyAccessor * _accessor; // +0x40
}
- (id)initWithSegment:(id)arg1;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithSegmentImpl;
- (void)dealloc;
- (struct)presentationStartTime;
- (struct)presentationEndTime;
- (struct)presentationDuration;
- (struct)presentationTimeRange;
- (struct)playbackTimeRange;
- (struct)absoluteTimeRange;
- (struct)duration;
- (BOOL)hasMultiSubtitles;
- (BOOL)isCuttableAtPresentationTime:(struct)arg1;
- (BOOL)isTextEditableAtPresentationTime:(struct)arg1;
- (BOOL)isRemovable;
- (BOOL)isDuplicable;
- (BOOL)isMovable;
- (BOOL)isTrimmable;
- (BOOL)isReversible;
- (BOOL)isContentRangeAdjustableCurrently;
- (BOOL)isSpeechRecognitionAvailable;
- (id)accessor;
- (BOOL)canEditMovieTitle;
- (BOOL)canEditContentDesc;
- (BOOL)canEditFancyText;
- (BOOL)canEditCaptionText;
- (BOOL)canEditTime;
- (BOOL)canEditLocation;
- (BOOL)canEditMovieTitleStyle;
- (BOOL)canEditContentDescStyle;
- (BOOL)canEditLyricsStyle;
- (BOOL)canReplaceEmoticon;
- (BOOL)canReplaceFancyText;
- (BOOL)canReplaceWhenAndWhere;
- (BOOL)canTrim;
- (BOOL)canDelete;
- (BOOL)canSyncPosition;
- (BOOL)canEditContentByHandleBox;
- (BOOL)canEditStyleByHandleBox;
- (BOOL)canTrimByHandleBox;
- (BOOL)canTTS;
- (void)prefetch;
- (void)cancelPrefetching;
- (void)syncWithMutationEntry:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)segment;
- (id)segmentID;
- (unsigned long long)segmentType;
- (id)segmentTitle;
- (void)setSegmentTitle:(id)arg1;
- (BOOL)isAnchored;
- (BOOL)hasAudioClip;
- (id)segmentDidMutateSignal;
- (unsigned long long)segmentUIState;
- (void)setSegmentUIState:(unsigned long long)arg1;
- (void)setAccessor:(id)arg1;
- (void).cxx_destruct;
@end

