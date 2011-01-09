/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <RTFCPZArchiveInputStream>;



@interface RTFCPZEntry : NSObject 
{
    <RTFCPZArchiveInputStream> *mInput;
    NSInteger mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    NSUInteger mCrc;
}


- (id)data;
- (void)dealloc;
- (id)inputStream;
- (void)copyToFile:(id)arg1;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;

@end