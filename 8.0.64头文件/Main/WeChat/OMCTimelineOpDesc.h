@interface OMCTimelineOpDesc : NSObject
{
    NSString * _title; // +0x8
    OMJID * _focusedSegmentID; // +0x10
    NSString * _undoValue; // +0x18
    NSString * _redoValue; // +0x20
    NSString * _valueFormatter; // +0x28
    NSDictionary * _userInfos; // +0x30
    struct _playheadTime; // +0x38
}
- (BOOL)isCanvasAdjustment;
- (BOOL)isDigiZoomAdjustment;
- (BOOL)isReplaceClip;
- (BOOL)isReverseClip;
- (BOOL)isTrimClip;
- (id)initWithTitle:(id)arg1 playheadTime:(struct)arg2 focusedSegmentID:(id)arg3;
- (id)initWithTitle:(id)arg1 playheadTime:(struct)arg2 focusedSegmentID:(id)arg3 undoValue:(id)arg4 redoValue:(id)arg5 valueFormatter:(id)arg6;
- (id)initWithTitle:(id)arg1 playheadTime:(struct)arg2 focusedSegmentID:(id)arg3 undoValue:(id)arg4 redoValue:(id)arg5 valueFormatter:(id)arg6 userInfos:(id)arg7;
- (id)initWithS12Message:(const void *)arg1;
- (void)s12SaveToMessage:(void *)arg1;
- (id)description;
- (id)title;
- (struct)playheadTime;
- (id)focusedSegmentID;
- (id)undoValue;
- (id)redoValue;
- (id)valueFormatter;
- (id)userInfos;
- (void).cxx_destruct;
@end
