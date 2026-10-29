@interface QTextManager : NSObject <QTextChangeDelegate>
{
    QMapContext * _mapContext; // +0x8
}
- (void)addText:(id)arg1;
- (void)removeText:(id)arg1;
- (void)updateText:(id)arg1;
- (void)textChanged:(id)arg1;
- (id)mapContext;
- (void)setMapContext:(id)arg1;
- (void).cxx_destruct;
@end

