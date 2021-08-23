# Problem: Defanging an IP Address
# Given a valid (IPv4) IP address, return a defanged version of that IP address.
# A defanged IP address replaces every period "." with "[.]".

# Example 1:
# Input: address = "1.1.1.1"
# Output: "1[.]1[.]1[.]1"

# Example 2:
# Input: address = "255.100.50.0"
# Output: "255[.]100[.]50[.]0"

class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        new_add=""
        for a in address:
            if a==".":
                new_add+="[.]"
            else:
                new_add+=a
        return new_add