/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand  {
}

@property(copy) NSString * assistantId;

+ (id)assistantDestroyedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantDestroyed;

- (id)groupIdentifier;
- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end