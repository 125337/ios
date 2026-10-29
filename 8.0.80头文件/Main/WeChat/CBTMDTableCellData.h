@interface CBTMDTableCellData : NSObject <CBTStreamMDFeederOutput>
{
    BOOL _hasEverDoneStreamingAnimation; // +0x8
    BOOL _isHeaderCell; // +0x9
    int _alignment; // +0xc
    id <CBTMDTableCellDataDelegate> _delegate; // +0x10
    NSAttributedString * _content; // +0x18
    double _width; // +0x20
    double _height; // +0x28
    double _maxWidth; // +0x30
    unsigned long long _row; // +0x38
    unsigned long long _column; // +0x40
    double _lastColumnAdjustWidth; // +0x48
    NSAttributedString * _currentDisplayedContent; // +0x50
    CBTStreamMDFeeder * _subFeeder; // +0x58
    id <CBTStreamMDFeederOutput> _actualOutput; // +0x60
    id /* block */ _streamTaskCompleteHandle; // +0x68
    id /* block */ _registerAnimatingTextViewBlock; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)appendStreamText:(id)arg1;
- (void)bindActualOutput:(id)arg1;
- (void)unbindActualOutput;
- (void)startStreamingAnimation;
- (void)stopStreamingAnimation;
- (void)notifyDataUpdate;
- (void)notifySizeUpdate;
- (void)notifyStreamingAnimationComplete;
- (void)setWidth:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)resetCachedSize;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (double)width;
- (double)height;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (unsigned long long)column;
- (void)setColumn:(unsigned long long)arg1;
- (BOOL)hasEverDoneStreamingAnimation;
- (void)setHasEverDoneStreamingAnimation:(BOOL)arg1;
- (BOOL)isHeaderCell;
- (void)setIsHeaderCell:(BOOL)arg1;
- (double)lastColumnAdjustWidth;
- (void)setLastColumnAdjustWidth:(double)arg1;
- (id)currentDisplayedContent;
- (void)setCurrentDisplayedContent:(id)arg1;
- (id)subFeeder;
- (void)setSubFeeder:(id)arg1;
- (id)actualOutput;
- (void)setActualOutput:(id)arg1;
- (id /* block */)streamTaskCompleteHandle;
- (void)setStreamTaskCompleteHandle:(id /* block */)arg1;
- (id /* block */)registerAnimatingTextViewBlock;
- (void)setRegisterAnimatingTextViewBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
