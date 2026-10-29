@interface BubbleInfo : NSObject <NSCopying>
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_bubbleCaches; // +0x10
    BOOL _isSender; // +0x18
    NSString * _bubbleName; // +0x20
    NSString * _bubbleNameHL; // +0x28
    unsigned long long _type; // +0x30
    long long _style; // +0x38
    unsigned long long _position; // +0x40
    UIEdgeInsets _edgeInsets; // +0x48
    UIEdgeInsets _margin; // +0x68
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getBubbleImage:(BOOL)arg1 isDarkMode:(BOOL)arg2;
- (id)getBubbleImage:(BOOL)arg1;
- (id)getBubbleImage:(BOOL)arg1 isDarkMode:(BOOL)arg2 useCache:(BOOL)arg3;
- (id)getNewBubbleImage:(BOOL)arg1;
- (id)resolvedBubbleImage:(BOOL)arg1 isDarkMode:(BOOL)arg2;
- (id)bubbleName;
- (void)setBubbleName:(id)arg1;
- (id)bubbleNameHL;
- (void)setBubbleNameHL:(id)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (UIEdgeInsets)margin;
- (void)setMargin:(UIEdgeInsets)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (void).cxx_destruct;
@end
